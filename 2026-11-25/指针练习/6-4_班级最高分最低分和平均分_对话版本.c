float fun (float score[],int n,float*max,float *min)
{
     *max = score[0];
     *min = score[0];
    float average = 0.0;
    for(int i = 0;i<n;i++)
        {
            if(score[i]>*max)
               *max = score[i];
               if(score[i]<*min)
                   *min = score[i];
            average  += score[i]/n;
        }
    return average;
}
