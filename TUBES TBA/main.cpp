#include <iostream>
#define top(S) S.top

using namespace std;
typedef int infotype;

struct Stack {
    infotype info[100];
    int top;
};

struct Simpan{
    int simpan[100];
};

Stack S;
Simpan t;
int FA2=1;
    int i;
    int j,x;
    int a=1;
    int b=2;
    int c=3;
    int d=4;


void createStack(Stack &S) {
    fill_n(S.info, 100, 0);
    S.top = -1;
}

void push (Stack &S,int data){

        if(top(S) != 100)
       {
           top(S)++;
           S.info[top(S)]=data;
       }

}

void pop(Stack &S){

        if(top(S)!= -1)
    {

        top(S)--;
    }

}


int main()
{
    string Inputan,y;

    int stateFA=0;

    getline(cin,Inputan);
    while (i!=Inputan.length()+1){

if (stateFA==0){

    if ((Inputan[i]=='x')||(Inputan[i]=='/')){
            stateFA=1;
            }
    else if((Inputan[i]=='+')||(Inputan[i]=='-')){
            stateFA=2;
            if ((Inputan[i+1]==' ')){
            cout<<"opr ";
            x=x+1;
            t.simpan[x]=b;
            }
            else if((Inputan[i]=='+')||(Inputan[i]=='-')){
             cout<<"num ";
              x=x+1;
            t.simpan[x]=a;

            }
            }
    else if (Inputan[i]=='('){
                stateFA=3;
             }
    else if (Inputan[i]==')'){
                stateFA=4;
             }
    else if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9')){  //CEK NUM WITH +
             stateFA=5;
             cout<<"num ";
            // a="num ";
             x=x+1;
             t.simpan[x]=a;
    }
}
else if (stateFA==1){
        if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9')){  //CEK NUM WITH +
             stateFA=99;
        }
        else if (Inputan[i]=='E'||Inputan[i]=='('||Inputan[i]==')'||Inputan[i]=='.'||Inputan[i]=='%'){
            stateFA=99;
        }
        else if (Inputan[i]==' '){
            stateFA=0;
        }
        else if((Inputan[i]=='+')||(Inputan[i]=='-')){
            stateFA=99;
        }
        cout<<"opr ";

        x=x+1;
        t.simpan[x]=b;
}
else if (stateFA==2){
    if (Inputan[i]==' '){
        stateFA=0;
        }
    else if (Inputan[i+1]==' '){

        }
    else if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9')){  //CEK NUM WITH +
             stateFA=5;
            }
    else if (Inputan[i]==' '){
            stateFA=0;
        }

}

else if (stateFA==3){
    if(Inputan[i]==' '){
        stateFA=0;
    }
    else if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9')){  //CEK NUM WITH +
             stateFA=5;

            }
     else if (Inputan[i]=='-'){
            stateFA=2;
        }
     else if (Inputan[i]=='('){
            stateFA=3;
        }
     else if (Inputan[i]==')'){
            stateFA=4;
        }
     else if (Inputan[i]=='E'||Inputan[i]=='/'||Inputan[i]=='+'||Inputan[i]=='.'||Inputan[i]=='%'||Inputan[i]=='x'){
            stateFA=99;
        }
    cout<<"bkakur ";

    x=x+1;
    t.simpan[x]=c;
    if (Inputan[i-1]=='('){
         if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9'||Inputan[i]=='-')){  //CEK NUM WITH +
             cout<<"num ";
            }
            x=x+1;
        t.simpan[x]=a;

    }
}


else if (stateFA==4){

    if (Inputan[i]==' '){
            stateFA=0;
        }
    else if (Inputan[i]==')'){
            stateFA=4;
        }
    else if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9')){  //CEK NUM WITH +
             stateFA=99;
        }
    else if (Inputan[i]=='E'||Inputan[i]=='('||Inputan[i]=='.'||Inputan[i]=='%'){
            stateFA=99;
        }
    cout<<"ttpkur ";

    x=x+1;
    t.simpan[x]=d;
}

else if (stateFA==5){

    if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9')){  //CEK NUM WITH +
             stateFA=5;
        }
    else if (Inputan[i]==' '){
            stateFA=0;
        }
    else if (Inputan[i]=='E'){
        stateFA=6;
    }
    else if (Inputan[i]=='.'){
        stateFA=9;
    }
    else if (Inputan[i]==')'){
        stateFA=4;
    }
    else if (Inputan[i]=='-'||Inputan[i]=='/'||Inputan[i]=='+'||Inputan[i]=='('||Inputan[i]=='%'||Inputan[i]=='x'){
            stateFA=99;
        }
}
else if (stateFA==6){
    if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9')){  //CEK NUM WITH +
             stateFA=7;
        }
     else if (Inputan[i]=='.'){
            stateFA=13;
        }
    else if (Inputan[i]==' '){
            stateFA=0;
        }
     else if (Inputan[i]=='E'){
            stateFA=2;
            cout<<"num ";

            x=x+1;
            t.simpan[x]=a;
        }
     else if (Inputan[i]=='/'||Inputan[i]=='.'||Inputan[i]=='('||Inputan[i]=='%'||Inputan[i]=='x'){
            stateFA=99;
        }
}

else if (stateFA==7){
    if (Inputan[i]==')'){
        stateFA=4;
    }
    else if (Inputan[i]=='.'){
        stateFA=11;
    }
    else if (Inputan[i]==' '){
            stateFA=0;
    }
    else if (Inputan[i]=='/'||Inputan[i]=='-'||Inputan[i]=='('||Inputan[i]=='%'||Inputan[i]=='x'||Inputan[i]=='+'||Inputan[i]=='E'){
            stateFA=99;
        }
}

else if (stateFA==8){
    if (Inputan[i]==')'){
        stateFA=4;
    }
    else if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9')){  //CEK NUM WITH +
             stateFA=8;
        }
     else if (Inputan[i]==' '){
            stateFA=0;
    }
    else if (Inputan[i]=='/'||Inputan[i]=='-'||Inputan[i]=='('||Inputan[i]=='%'||Inputan[i]=='x'||Inputan[i]=='+'||Inputan[i]=='.'){
            stateFA=99;
        }
}

else if (stateFA==9){
      if (Inputan[i]=='/'||Inputan[i]=='-'||Inputan[i]=='('||Inputan[i]=='%'||Inputan[i]=='x'||Inputan[i]=='+'||Inputan[i]=='.'||Inputan[i]=='E'||Inputan[i]==')'){
            stateFA=99;
        }
    else if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9')){  //CEK NUM WITH +
             stateFA=8;
        }
}

else if (stateFA==11){
     if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9')){  //CEK NUM WITH +
             stateFA=12;
        }
        else if (Inputan[i]=='/'||Inputan[i]=='-'||Inputan[i]=='('||Inputan[i]=='%'||Inputan[i]=='x'||Inputan[i]=='+'||Inputan[i]=='.'||Inputan[i]=='E'||Inputan[i]==')'||Inputan[i]==' '){
            stateFA=99;
        }
}

else if (stateFA==12){
    if (Inputan[i]==')'){
        stateFA=4;
    }
    else if (Inputan[i]==' '){
            stateFA=0;
    }
    else if((Inputan[i]=='0'||Inputan[i]=='1'||Inputan[i]=='2'||Inputan[i]=='3'||Inputan[i]=='4'||Inputan[i]=='5'||Inputan[i]=='6'||Inputan[i]=='7'||Inputan[i]=='8'||Inputan[i]=='9')){  //CEK NUM WITH +
             stateFA=12;
        }
    else if (Inputan[i]=='/'||Inputan[i]=='-'||Inputan[i]=='('||Inputan[i]=='%'||Inputan[i]=='x'||Inputan[i]=='+'||Inputan[i]=='.'||Inputan[i]=='E'){
            stateFA=99;
        }
}

else if (stateFA==99){
    cout<<"error "<<endl;break;
}

i=i+1;



    }


    createStack(S);
    while (j!=x+1){
        if (FA2==1){
            FA2=2;
            push(S,0);
        }
        else if (FA2==2){
            if (t.simpan[j]==a){
                FA2=3;
                push(S,a);
            }
            else if (t.simpan[j]==c){
                FA2=7;
                push(S,c);
                pop(S);
            }

        }
        else if (FA2==3){
            if (t.simpan[j]==b){
                FA2=4;
                pop(S);
                push(S,b);
            }
        }
        else if (FA2==4){
            if (t.simpan[j]==a){
                FA2=5;
                pop(S);
                pop(S);
            }
            else if (t.simpan[j]==c){
                FA2=7;
                pop(S);
            }
        }
        else if (FA2==5){
            if (t.simpan[j]==b){
                FA2=4;
                push(S,b);
            }
            else{
                FA2=6;
                pop(S);
            }
        }
        else if (FA2==7){
            if (t.simpan[j]==a){
                FA2=8;
                push(S,a);
            }
            else if (t.simpan[j]==c){
                FA2=7;
                pop(S);
            }
        }
        else if (FA2==8){
            if (t.simpan[j]==b){
                FA2=9;
                pop(S);
                push(S,b);
            }
        }
        else if (FA2==9){
            if (t.simpan[j]==a){
                FA2=10;
                pop(S);
            }
            else if (t.simpan[j]==c){
                FA2=7;
                pop(S);
            }
        }
        else if (FA2==10){
            if (t.simpan[j]==b){
                FA2=9;
                push(S,b);
            }
            else if (t.simpan[j]==d){
                FA2=11;
                pop(S);
            }
        }
        else if (FA2==11){
            if (t.simpan[j]==d){
                FA2=11;
                pop(S);
            }
            else if (t.simpan[j]==b){
                FA2=9;
                push(S,b);
            }
            else {
                pop(S);
            }
        }
        else if (FA2==12){
        FA2=13;
        pop(S);
        }
    j=j+1;
    }
    if (top(S)==-1){
            cout<<endl;
        cout<<"valid"<<endl;
    }
    else {
        cout<<endl;
        cout<<"tidak valid"<<endl;
    }

    return 0;
}
