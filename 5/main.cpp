#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

class Ring {
public:
    int x;
    int y;
    int scale;
void SetX(int qw){
    x = qw;
}
void SetY(int qe){
    y = qe;
}
void SetScale(int qwe){
    scale = qwe;
}
};
void setd(int n, Ring jey[]){
    int XX = 0;
    int XXsiz;
    int XY = 0;
    int XYsiz;
    int XZ = 0;
    int XZsiz;
    for(int i=1;i<=n;i++){
        for(int yu=1;yu<=n;yu++){
            if(jey[yu].y==i && jey[yu].x==1){
                XX = 1;
                XXsiz = jey[yu].scale;
            }
            else if(jey[yu].y==i && jey[yu].x==2){
                XY = 1;
                XYsiz = jey[yu].scale;
            }
            else if(jey[yu].y==i && jey[yu].x==3){
                XZ = 1;
                XZsiz = jey[yu].scale;
            }
        }
            if(XX == 1){
            for(int j=n;j>XXsiz/2;j--)
                cout<<" ";
            for(int j=XXsiz;j>0;j--)
                cout<<"#";
            for(int j=n;j>XXsiz/2;j--)
                cout<<" ";
                XX = 0;
            }
            else if(XX == 0){
            for(int j=n;j>0;j--)
                cout<<" ";
            for(int j=1;j>0;j--)
                cout<<"|";
            for(int j=n;j>0;j--)
                cout<<" ";
            }
            if(XY == 1){
            for(int j=n;j>XYsiz/2;j--)
                cout<<" ";
            for(int j=XYsiz;j>0;j--)
                cout<<"#";
            for(int j=n;j>XYsiz/2;j--)
                cout<<" ";
                XY = 0;
            }
            else if(XY == 0){
            for(int j=n;j>0;j--)
                cout<<" ";
            for(int j=1;j>0;j--)
                cout<<"|";
            for(int j=n;j>0;j--)
                cout<<" ";
            }
            if(XZ == 1){
            for(int j=n;j>XZsiz/2;j--)
                cout<<" ";
            for(int j=XZsiz;j>0;j--)
                cout<<"#";
            for(int j=n;j>XZsiz/2;j--)
                cout<<" ";
                XZ = 0;
            }
            else if(XZ == 0){
            for(int j=n;j>0;j--)
                cout<<" ";
            for(int j=1;j>0;j--)
                cout<<"|";
            for(int j=n;j>0;j--)
                cout<<" ";
            }
            cout<<endl;
        }
        }
void Creat(int n, Ring jey[]){
    for(int y=1;y<=n;y++){
        jey[y].x = 1;
        jey[y].y = y;
        jey[y].scale = y*2-1;
    }
}
int Moveft(int n, int a, int s, Ring jey[]){
    bool de,te;
    de = false;
    te = false;
    int ret;
    int ter;
    int aq = 0;
    int sw = 0;
    for(int rew=1;rew<=n;rew++){
        if(jey[rew].x==a && jey[rew].y<jey[rew+1].y && de == false){
            aq = jey[rew].scale;
            ter = rew;
            de = true;
        }
        else if(jey[rew].x==a && jey[rew].y==jey[rew+1].y && de == false){
            aq = jey[rew].scale;
            ter = rew;
            de = true;
        }
        else if(jey[rew].x==a && jey[rew].y==n && de == false){
            aq = jey[rew].scale;
            ter = rew;
            de = true;
        }
        if(jey[rew].x==s && jey[rew].y<jey[rew+1].y && te == false){
            sw = jey[rew].scale;
            ret = jey[rew].y;
            te = true;
        }
        else if(jey[rew].x==s && jey[rew].y==n && te == false){
            sw = jey[rew].scale;
            ret = jey[rew].y;
            te = true;
        }
    }
    if(aq == 0){cout<<"Here is nothing to move"<<endl;return 0;}
    else if(aq>sw && sw !=0){cout<<"Cannot do this"<<endl;return 0;}
    else if(aq != 0 && sw == 0){jey[ter].x = s;jey[ter].y = n;}
    else if(aq<sw){jey[ter].x = s;jey[ter].y = ret-1;}
    aq = 0;
    sw = 0;
    de = false;
    te = false;
}
void Revisor(int n, Ring jey[]){
    int rev = 0;
    int iso = 0;
    int bvc = 0;
    for(int rr=1;rr<=n;rr++){
        if(jey[rr].x==1)
            rev = 1;
        if(jey[rr].x==2)
            iso = 1;
        if(jey[rr].x==3)
            bvc = 1;
    }
    if(rev==0 && iso==0)cout<<"You win"<<endl;
    if(rev==0 && bvc==0)cout<<"You win"<<endl;
    rev = 0;
    iso = 0;
    bvc = 0;
}
void Game(int n, int a, int s, Ring jey[],int u){
    setd(n, jey);
    cout<<"Move from: ";
    cin>>a;
    cout<<"Move to: ";
    cin>>s;
    system("cls");
    Moveft(n,a,s,jey);
    u++;
    cout<<"Count: "<<u<<endl;
    Revisor(n,jey);
    Game(n,a,s,jey,u);
}
int main()
{
    int n,a,s;
    int u = 0;
    cout<<"Rings count: ";
    cin>>n;
    Ring jey[n];
    jey[0].x = 0;
    Creat(n, jey);
    Game(n,a,s,jey,u);
    getch();
    return 0;
}
