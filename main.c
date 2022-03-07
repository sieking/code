bool SqlistDelete(Sqlist &L,int i,ElemType &e){
   if(L.length==0)return false;
   if(i<1||i>L.length)return false;
   e = L.data[i-1];//参数作用和合法判断在开始解决完

   for(int j = i;j<=L.length;j++){
      L.data[j-1] = L.data[j];
   }
   L.length--;

   return true;
}
