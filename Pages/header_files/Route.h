#ifndef Route_H
#define Route_H 

class Route
{
    public:
        void AdminLogin();
        void AdminHomePage();
        void AdminNotf();
        void UserManagement();
        void UserSearch(int);
        void PublicLogin();
        void PublicHomePage();
        void PublicRegister();
        void PublicNavPage(int);
        void PublicProfile(int);
        void EventReg(int);
        void PublicNotf(int);
        void ForgetPass();
        void SendNotf(int);
};
 
#endif 