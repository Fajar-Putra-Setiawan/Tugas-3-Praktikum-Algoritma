#include <iostream>

using namespace std;

int main()
{
    string username, password;
    int mata_kuliah, UTS1, UAS1 ,UTS2, UAS2;
    float harian1, harian2;
    float rata_rata1, rata_rata2;

    cout << "========Login Akun=========="<<endl;
    cout << "Masukan Username : ";
    cin >> username;

    cout << "Masukan Password : ";
    cin >> password;

    if(username == "fajar" && password== "123456"){
                cout << "Login Berhasil!"<<endl;
                cout <<endl;
                cout << "Input Nilai mata kuliah"<<endl;
                cout << "1. Algoritma dan Pemrograman"<<endl;
                cout << "2. Kalkulus"<<endl;
                cout << "Pilih Mata Kuliah = ";
                cin >> mata_kuliah;

                        if(mata_kuliah==1){
                            cout << "Nilai Harian = ";
                            cin >> harian1;
                            cout << "Nilai UTS    = ";
                            cin >> UTS1;
                            cout << "Nilai UAS    = ";
                            cin >> UAS1;
                            cout<<endl;
                            rata_rata1 = (harian1+UTS1+UAS1)/3;

                                if(rata_rata1>=80){
                                    cout<<"Anda Lulus Mata kuliah Algoritma dan Pemrograman dengan nilai : "<<rata_rata1;
                                } else {
                                    cout << "Anda Tidak Lulus Mata Kuliah Algoritma dan Pemrograman dengan nilai : "<<rata_rata1;
                                }
                        } else if(mata_kuliah==2){
                            cout << "Nilai Harian = ";
                            cin >> harian2;
                            cout << "Nilai UTS    = ";
                            cin >> UTS2;
                            cout << "Nilai UAS    = ";
                            cin >> UAS2;
                            cout<<endl;
                            rata_rata2 = (harian2+UTS2+UAS2)/3;
                                if(rata_rata2>=80){
                                    cout << "Anda Lulus Mata kuliah Kalkulus dengan nilai : "<<rata_rata2;
                                } else {
                                    cout << "Anda Tidak Lulus Mata Kuliah Kalkulus dengan nilai : "<<rata_rata2;
                                }
                        } else {
                            cout << "Input salah";
                        }

            } else if (username != "fajar" && password != "123456"){
        cout << "Username dan password anda salah";
    } else if(username != "fajar") {
        cout << "Username anda salah";
    } else if (password != "123456"){
        cout << "Password anda salah";
    }


    return 0;
}
