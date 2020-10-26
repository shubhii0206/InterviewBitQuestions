vector<int> Solution::lszero(vector<int> &arr) {
    
    
    unordered_map<int, int> sumtillnow;
    int sum = 0;
    int len =0, maxlen =0;
    int start =-1, end =-1;
    sumtillnow[0] = -1;
    
    for(int i =0; i < arr.size(); i++){
       sum += arr[i];
       if(arr[i] == 0 && maxlen == 0)
         { maxlen = 1;
          start = i;
          end = i;}
        if(sum == 0)
        {
            if(i+1 > maxlen)
            {  maxlen = i+1;
                start = 0;
                end = i;
            }
            
        }
       if(sumtillnow.find(sum) != sumtillnow.end())
       {   len = i - sumtillnow[sum];
           if(len > maxlen)
           {   maxlen = len;
               start = sumtillnow[sum]+1 ;
               end  =i;
           }
       }
       else
       sumtillnow[sum] = i;}
vector<int> v;
if(start == -1 && end == -1)
return v;

    for(int i =start; i <= end; i++)
    v.push_back(arr[i]);
    return v;
    
    
    
}

