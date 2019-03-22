    #include <iostream>  
    using namespace std;  
    int main()  
    {  
    int n = 0;
    int numero_inverso = 0;
    int aux;    
    cout<<"Enter a number: ";    
    cin>>n;    
      while(n!=0)    
      {    
         aux=n%10;      
         numero_inverso = numero_inverso*10+aux;    
         n/=10;    
      }    
     cout<<"numero inverso: "<<numero_inverso<<endl;     
    return 0;  
    }  