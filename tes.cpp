#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));

  int FortuneCookies = std::rand()%6;
  int LuckyNumber1 = std::rand()%51;
  int LuckyNumber2 = std::rand()%51;
  int LuckyNumber3 = std::rand()%51;
  int LuckyNumber4 = std::rand()%51;
  int LuckyNumber5 = std::rand()%51;

  if (FortuneCookies == 0){
    std::cout<<"Don't pursue happiness – create it.\n";
    std::cout<<"Your lucky number: \n";
    std::cout<<LuckyNumber1<<" "<<LuckyNumber2<<" "<<LuckyNumber3<<" "<<LuckyNumber4<<" "<<LuckyNumber5;
  }
  else if (FortuneCookies == 1){
    std::cout<<"All things are difficult before they are easy.\n";
    std::cout<<"Your lucky number: \n";
    std::cout<<LuckyNumber1<<" "<<LuckyNumber2<<" "<<LuckyNumber3<<" "<<LuckyNumber4<<" "<<LuckyNumber5;
  }
  else if (FortuneCookies == 2){
    std::cout<<"The early bird gets the worm, but the second mouse gets the cheese.\n";
    std::cout<<"Your lucky number: \n";
    std::cout<<LuckyNumber1<<" "<<LuckyNumber2<<" "<<LuckyNumber3<<" "<<LuckyNumber4<<" "<<LuckyNumber5;
  }
  else if (FortuneCookies == 3){
    std::cout<<"Someone in your life needs a letter from you.\n";
    std::cout<<"Your lucky number: \n";
    std::cout<<LuckyNumber1<<" "<<LuckyNumber2<<" "<<LuckyNumber3<<" "<<LuckyNumber4<<" "<<LuckyNumber5;
  }
  else if (FortuneCookies == 4){
    std::cout<<"The fortune you search for is in another cookie.\n";
    std::cout<<"Your lucky number: \n";
    std::cout<<LuckyNumber1<<" "<<LuckyNumber2<<" "<<LuckyNumber3<<" "<<LuckyNumber4<<" "<<LuckyNumber5;
  }
   else {
    std::cout<<"Help! I'm being held prisoner in a Chinese bakery\n";
    std::cout<<"Your lucky number: \n";
    std::cout<<LuckyNumber1<<" "<<LuckyNumber2<<" "<<LuckyNumber3<<" "<<LuckyNumber4<<" "<<LuckyNumber5;
  }
}
