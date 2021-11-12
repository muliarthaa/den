#include<iostream>
#include<fstream>
using namespace std;

class loginManager
{
    public:
        string userNameAttempt;
        string passwordAttempt;
        loginManager()
        {
            accssessGranted = 0;

        }
        void login()
        {
            cout<< "enter your username and password.\nUsername: ";
            cin>> userNameAttempt;

            username = getFile("akun.dat");
            if(userNameAttempt == username)
            {
                cout<<"password: ";
                cin>> passwordAttempt;
                password= getFile("pswd.dat");
                if(passwordAttempt== password ){
                    cout<<"loading. . .";
                }
            }
            else
            {
                cout<< "coba lagi."<< endl;
                login();
            }
        }
        string getFile(const char* p_fileName)
        {
            string line;
            fstream file;
    
            file.open(p_fileName, ios:: in);
            if(file.is_open())
            {
                getline(file, line);
                cout<< line<< endl; 
            }
            file.close();

            return line;
        }
        private:
            string username;
            string password;
            bool accssessGranted;
};
int main()
{
    
    loginManager loginManagerObj;
    loginManagerObj.login();
}