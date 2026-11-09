import numpy as np
import matplotlib.pyplot as plt

# ========== 基础参数 ==========
P0 = 0.4
P1 = 1 - P0
EPS1_DEFAULT = 0.07
N_REPEAT = 5
TRIALS = int(1e6)
msg_x1 = np.array([1,0,1,1,1])
msg_x2 = np.array([1,0,1,1,0,0,1,1,1])

def transmit_one_bit(tx_bit, eps0, eps1):
    if tx_bit == 0:
        return 1 if np.random.rand() < eps0 else 0
    else:
        return 0 if np.random.rand() < eps1 else 1

def majority_decode(received_arr):
    cnt1 = np.sum(received_arr)
    return 1 if cnt1 >= 3 else 0

def transmit_message(tx_msg, eps0, eps1):
    rx = []
    for bit in tx_msg:
        rx.append(transmit_one_bit(bit, eps0, eps1))
    return np.array(rx)

def transmit_msg_majority(tx_msg, eps0, eps1, nrep=5):
    rx_decode = []
    for bit in tx_msg:
        block = [transmit_one_bit(bit, eps0, eps1) for _ in range(nrep)]
        rx_decode.append(majority_decode(block))
    return np.array(rx_decode)

def sim_msg_error_prob(msg, eps0, eps1, trials):
    err_direct = 0
    err_major = 0
    for _ in range(trials):
        r1 = transmit_message(msg, eps0, eps1)
        if not np.array_equal(r1, msg):
            err_direct += 1
        r2 = transmit_msg_majority(msg, eps0, eps1)
        if not np.array_equal(r2, msg):
            err_major += 1
    pe_direct = err_direct / trials
    pe_major = err_major / trials
    return pe_direct, pe_major

# 扫描ε0
eps0_scan = np.linspace(0.01, 0.15, 20)
pe_x1_dir = []
pe_x1_maj = []
pe_x2_dir = []
pe_x2_maj = []

# 报文仿真速度慢，这里用 TRIALS//10 平衡速度和精度，需要更准可以改回1e6
for e0 in eps0_scan:
    pe1d, pe1m = sim_msg_error_prob(msg_x1, e0, EPS1_DEFAULT, TRIALS//10)
    pe2d, pe2m = sim_msg_error_prob(msg_x2, e0, EPS1_DEFAULT, TRIALS//10)
    pe_x1_dir.append(pe1d)
    pe_x1_maj.append(pe1m)
    pe_x2_dir.append(pe2d)
    pe_x2_maj.append(pe2m)
    print(f"eps0={e0:.3f}, x1直传Pe={pe1d:.6f}, x1多数Pe={pe1m:.6f}, x2直传Pe={pe2d:.6f}, x2多数Pe={pe2m:.6f}")

# 绘图
plt.figure(figsize=(9,6))
plt.plot(eps0_scan, pe_x1_dir, 'o-', label="x1 无重复无校验")
plt.plot(eps0_scan, pe_x1_maj, 's-', label="x1 n=5多数表决")
plt.plot(eps0_scan, pe_x2_dir, '^-', label="x2 无重复无校验")
plt.plot(eps0_scan, pe_x2_maj, 'd-', label="x2 n=5多数表决")
plt.xlabel(r"$\varepsilon_0$ (0→1错误概率)")
plt.ylabel("整条报文误传概率 Pe")
plt.title("(d) 报文误传概率对比（x1、x2）")
plt.legend()
plt.grid(True, alpha=0.3)
plt.show()