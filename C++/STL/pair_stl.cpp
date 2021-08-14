#include<iostream>

int main()
{
//     std::pair <int,float>p1(1,2.3f);
//     std::cout<<p1.first<<" : "<<p1.second<<std::endl;
    
   /* 
    std::pair <int,char>p1;
    p1.first = 1;
    p1.second = 'M';
    std::cout<<p1.first<<" : "<<p1.second<<std::endl;

    */
   
   
   /*
   std::pair <int,char>p1;
   std::cout<<p1.first<<" : "<<p1.second<<std::endl;
   */
   
 /*   
    std::pair<int,char>p1[4];
    int ascii[] = {65,66,67,68};
    char value[] = {'a','b','c','d'};
    for(int i=0;i<(sizeof(ascii)/4);i++)
    {
        p1[i] = std::make_pair(ascii[i],value[i]);
    }
    for(int i=0;i<(sizeof(ascii)/4);i++)
    {
        std::cout<<p1[i].first<<" : "<<p1[i].second<<std::endl;   
    }
    
*/
 /*
    std::pair<int, char>p1(1,'M');
    std::pair<int, char>p2(2,'N');
//     std::pair<char,float>p2('a', 65.2f); 
    std::cout<<p1.first<<" : "<<p1.second<<std::endl;
    std::cout<<p2.first<<" : "<<p2.second<<std::endl;
    p1.swap(p2);
    std::cout<<p1.first<<" : "<<p1.second<<std::endl;
    std::cout<<p2.first<<" : "<<p2.second<<std::endl;
    */
    /*
    std::pair <int,char>p1={1,'M'};
    std::cout<<p1.first<<" : "<<p1.second<<std::endl;
    */
    
    std::pair <int,std::string>p1={1,"Mahesh"};
    std::cout<<p1.first<<" : "<<p1.second<<std::endl;
 
 
    return 0;
}
