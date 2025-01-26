#include<iostream>
#include<string.h>
using namespace std;

const int SIZE = 20;
class String
{
    private:
        char str[SIZE];
    public:
        String(): str(""){}
        String(char s[])
        {
            strcpy(str, s);
        }

        void getstr()
        {
            cout<<"Enter string ";
            cin>>str;
        }
        void showstr() const
        {
            cout<<"String is "<<str<<endl;
        }
        /// S3 = S1 + S2;
        String operator + (const String &ss) const
        {
            String temp;
           if(strlen(str) + strlen(ss.str) >= SIZE-1)
           {
               std::cout << "overload!" << std::endl;
           }
           else
           {
                strcpy(temp.str, str);
                strcat(temp.str, ss.str);
           }
           return temp;
        }
       String operator += (const String &ss)
        {
            if(strlen(str) + strlen(ss.str) >= SIZE-1)
           {
               std::cout << "overload!" << std::endl;
           }
           else
           {
                strcat(str, ss.str);
           }
           return String (str);
        }

        bool operator > (const String &ss) const
        {
            if(strcmp(str, ss.str) > 0)
                return true;
            else
                return false;
        }
        bool operator < (const String &ss) const
        {
            if(strcmp(str, ss.str) < 0)
                return true;
            else
                return false;
        }
        ~String() {}

};
int main()
{
    String s1, s2("Ali");
    s1.getstr();        /// khan
    cout<<endl;
    s1.showstr();
    s2.showstr();

    String s3 = s1 + s2;
    cout<<endl;
    s3.showstr();

/*   s1 += s2;
    cout<<endl;
    s1.showstr();
*/
    if(s1 > s2)         //compares asccii codes of first character usually
        cout<<"S1 is largest string"<<endl;
    else if(s1 < s2)
        cout<<"S2 is largest string"<<endl;
    else
        cout<<"Both are equals"<<endl;

    return 0;
}
