#include <iostream>

using namespace std;

class Sensor{
    protected:
        string userName;
        string sensorModel;
        int sensorLife;
        int sensorUsed;
        double bloodSugar;
    public:
        Sensor(string n, string m, int l, int u, double bs):userName(n), sensorModel(m), sensorLife(l), sensorUsed(u), bloodSugar(bs){}

        virtual void checkBloodSugarLevel() = 0;
        virtual int displayRemainingUsage(){
            return(sensorLife - sensorUsed);
        }
        virtual ~Sensor(){
            cout<<"Sensor destructed for "<<userName<<endl;
        }

        void setUserName(string name){userName = name;}
        string getUserName(){return userName;}

        void setSensorModel(string model){sensorModel = model;}
        string getSensorModel(){return sensorModel;}

        void setSensorLife(int life){sensorLife = life;}
        int getSensorLife(){return sensorLife;}

        void setSensorUsed(int used){sensorUsed = used;}
        int getSensorUsed(){return sensorUsed;}

        void setBloodSugar(double sugar){bloodSugar = sugar;}
        double getBloodSugar(){return bloodSugar;}
};

class Dexcom:public Sensor{
    public:
        Dexcom(string n, string m, int l, int u, int bs):Sensor(n, m, l, u, bs){}

        void checkBloodSugarLevel(){
            if (bloodSugar < 60){
                cout<<"Critical low blood sugar!"<<endl;
            }else if(bloodSugar >= 60 && bloodSugar <= 110){
                cout<<"Normal blood sugar."<<endl;
            }else if(bloodSugar > 110){
                cout<<"High blood sugar!"<<endl;
            }
        }

        int displayRemainingUsage(){
            return Sensor::displayRemainingUsage() + 10;
        }
};

class Abbott:public Sensor{
    public:
        Abbott(string n, string m, int l, int u, int bs):Sensor(n, m, l, u, bs){}

        void checkBloodSugarLevel(){
            if(bloodSugar < 80){
                cout<<"Critical low blood sugar!"<<endl;
            }else if(bloodSugar >= 80 && bloodSugar <= 130){
                cout<<"Normal blood sugar."<<endl;
            }else if(bloodSugar > 130){
                cout<<"High blood sugar!"<<endl;
            }
        }

        int displayRemainingUsage(){
            return Sensor::displayRemainingUsage() + 7;
        }
};

class Medtrum:public Sensor{
    public:
        Medtrum(string n, string m, int l, int u, int bs):Sensor(n, m, l, u, bs){}

        void checkBloodSugarLevel(){
            if(bloodSugar < 75){
                cout<<"Critical low blood sugar!"<<endl;
            }else if(bloodSugar >= 75 && bloodSugar <=120){
                cout<<"Normal blood sugar."<<endl;
            }else if(bloodSugar > 120){
                cout<<"High blood sugar!"<<endl;
            }
        }

        int displayRemainingUsage(){
            return Sensor::displayRemainingUsage() + 5;
        }
};

int main(){
    int sensorCount = 3;
    Sensor* sensor[sensorCount];

    sensor[0] = new Dexcom("Naz", "G7", 6, 1, 75);
    sensor[1] = new Abbott("Gizem", "Libre2", 8, 1, 75);
    sensor[2] = new Medtrum("Yaren", "S7-960", 6, 1, 110);

    for(int i = 0; i < sensorCount; i++){
        cout<<sensor[i]->getUserName()<<"'s Blood Sugar Check:"<<endl;
        cout<<"Sensor Model: "<<sensor[i]->getSensorModel()<<endl;
        cout<<"Testing with blood sugar: "<<sensor[i]->getBloodSugar()<<endl;
        sensor[i]->checkBloodSugarLevel();
        cout<<"Remaining usage days: "<<sensor[i]->displayRemainingUsage()<<" days"<<endl<<endl;
    }

    for(int i = 0; i < sensorCount; i++){
        delete sensor[i];
    }

    return 0;
}
//Yiğit Şevki Kaplan (23244710009)