#ifndef Route_H
#define Route_H 

class Route
{
    public:
        void AdminLogin();
        void AdminHomePage();
        void AdminNotf();
        void PublicLogin();
        static void PublicHomePage();
        void PublicRegister();
        void PublicNavPage(int);
        void PublicProfile(int);
        void EventReg(int);
        void PublicNotf(int);
};
 
#endif 