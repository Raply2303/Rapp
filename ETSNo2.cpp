#include <iostream> 
using namespace std;
main(){
    int mangga, rumah, tetangga, sisa, orang1, orang2, orang3;
    int jumlahMangga, jumlahOrang;
    jumlahMangga = mangga * 2;
    cout << "Mangga yang dibeli (kg) : " ;
    cin >> mangga;
    cout << "Jumlah tetangga yang beranggotaan" << endl;
    cout << "1 orang : " ;
    cin >> orang1; orang1 = orang1*1;
    cout << "2 orang : " ;
    cin >> orang2; orang2 = orang2*2;
    cout << "3 orang : " ;
    cin >> orang3; orang3 = orang3*3;

    jumlahOrang = orang1 * 1 + orang2 * 2 + orang3 * 3;
    sisa = jumlahMangga - jumlahOrang;

    if (sisa >= 0){
    cout << "Sisa mangga : " << sisa << endl;
    } else 
    cout << "Mangga yang dibeli kurang!" ;
    
}