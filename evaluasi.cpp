#include <iostream>
using namespace std;

int main()
{
int temp;
int elemen[6] = {1, 9, 0, 6, 7, 3};
bool urutkan;
int a = 5;

do{
urutkan = false;
for(int b = 0; b < 6; b++){
if(elemen[b] > elemen[b+1]){
temp = elemen[b];
elemen[b] = elemen[b+1]; elemen[b+1] = temp;
urutkan = true;
}
}

a--;

}while(urutkan);
for(int b = 0; b < 6; b++){
cout << elemen[b] << " ";
}

return 0;
}
