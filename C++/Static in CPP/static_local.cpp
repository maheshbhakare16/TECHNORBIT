
#include<iostream>

// -------------------- FUNCTION TO  COUNT LIKE TO POST ----------------------------
void dopostlike()
{
static int like=0;
like++;
std::cout<<like<<std::endl;
}
// -------------------- FUNCTION TO  COUNT LIKE TO STORY ----------------------------
void dostorylike()
{
static int like=0;
like++;
std::cout<<like<<std::endl;
}
int main()
{
std::cout<<"POST LIKE: "<<std::endl;
dopostlike();
dopostlike();
std::cout<<"STORY LIKE: "<<std::endl;
dostorylike();
std::cout<<"POST LIKE: "<<std::endl;
dopostlike();
dopostlike();
dopostlike();
std::cout<<"STORY LIKE: "<<std::endl;
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
dostorylike();
return 0;
}
