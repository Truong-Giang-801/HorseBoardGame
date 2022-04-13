#include<iostream>
#include<cstring>
#include<time.h>
#include<conio.h>
#include<iomanip>
#include<windows.h>
#include<cstdlib>
using namespace std;
void printBoard1(char board[][6],int map[][5],int size){

    for( int i=0; i<size; i++){
        for(int j =0 ; j<size; j++){
        cout<<" ------";
        } cout<<endl<<"|";
        for( int j = 0; j<size; j++){
            cout<<"      |";
        }cout<<endl<<"|";
        for(int j =0;j<size;j++){
        cout<< setw(5) << left<<board[map[i][j]];
        cout<<" |"; 
        }
        cout<<endl<<"|";
        for( int j = 0; j<size; j++){
            cout<<"      |";
        }cout<<endl;
    }
    for(int j =0 ; j<size; j++){
        cout<<" ------";}cout<<endl;


        
}
void setBoard1(char board[][6], char name[][6],int pos[],int horse[][4], int size, int numberPlayer,int numberHorse){
for (int i=0;i<=size*size;i++){
        memcpy(board[i],"     ",6);
    }
for(int i =0;i<numberPlayer;i++){
    for(int j =0;j<numberHorse;j++){
        memcpy(board[horse[i][j]],name[i],6);
        
    }


    }
}
void playGame1(char board[][6],char name[][6],int pos[],int map[][5],int horse[][4],float win[], int size, int numberPlayer,int numberHorse,int roll){
    
    int move;
     int winner = 0;
    

    while(winner == 0){ 

        
                
                
       int chooseHorse;
       srand(time(NULL));
       for(int i =0;i<numberPlayer;i++){
           setBoard1(board,name,pos,horse,size,numberPlayer,numberHorse);

    printBoard1(board, map,size);
           cout<<name[i]<<" turn"<<endl;
           do{
            cout<<"which horse your want to move? ";cin>>chooseHorse;
            chooseHorse -=1;
            if(chooseHorse >=numberHorse) cout<<"invalid choosed, please choose again\n";
           }
            while(chooseHorse>=numberHorse);
           system("cls");

       move = rand()%roll +1;
       cout<<name[i]<<" roll is "<<move<<endl;
       if(horse[i][chooseHorse]+move > size*size ){
           cout<<name[i]<<" cannot move!\n\n";

       }
       else{
      horse[i][chooseHorse]+= move;
       cout<<name[i]<<" move forward "<<move<<" step \n\n";
       if(horse[i][chooseHorse]==size*size ){
           system("cls");

            cout<<name[i]<<" is the winner !!\n\n\n"<<endl;

           win[i] +=1;

           winner = 1;
           break;
       }
       
       }
       for(int j=0;j<numberPlayer;j++){
           for(int o=0; o<numberHorse;o++)
           if(horse[i][chooseHorse]==horse[j][o]&&i!=j){
               horse[j][o]=0;
               cout<<name[i]<<" kicked "<<name[j]<<" to the start !"<<endl;
               break;
           }
       }
       
       
     
    

    }
    }
   setBoard1(board,name,pos,horse,size,numberPlayer,numberHorse);
    printBoard1(board, map,size);

}
void printBoard(char board[][6],int map[][3],int size){
    for( int i=0; i<size; i++){
        for(int j =0 ; j<size; j++){
        cout<<" ------";
        } cout<<endl<<"|";
        for( int j = 0; j<size; j++){
            cout<<"      |";
        }cout<<endl<<"|";
        for(int j =0;j<size;j++){
          cout<< setw(5) << left<<board[map[i][j]]<<" |";

        }
        cout<<endl<<"|";
        for( int j = 0; j<size; j++){
            cout<<"      |";
        }cout<<endl;
    }
    for(int j =0 ; j<size; j++){
        cout<<" ------";}cout<<endl;
}
void setBoard(char board[][6], char name[][6],int pos[],int horse[][4], int size, int numberPlayer,int numberHorse){
for (int i=0;i<=size*size;i++){
        memcpy(board[i],"     ",6);
    }
for(int i =0;i<numberPlayer;i++){
    for(int j =0;j<numberHorse;j++){
        memcpy(board[horse[i][j]],name[i],6);
      
    }


    }
}
void playGame(char board[][6],char name[][6],int pos[],int map[][3],int horse[][4],float win[], int size, int numberPlayer,int numberHorse,int roll){
    
    int move;
     int winner = 0;
    

    while(winner == 0){ 
                
                
       int chooseHorse;
       srand(time(NULL));
       for(int i =0;i<numberPlayer;i++){
           setBoard(board,name,pos,horse,size,numberPlayer,numberHorse);

    printBoard(board, map,size);
           cout<<name[i]<<" turn"<<endl;
           do{
            cout<<"which horse your want to move? ";cin>>chooseHorse;
            chooseHorse -=1;
            if(chooseHorse >=numberHorse) cout<<"invalid choosed, please choose again\n";
           }
            while(chooseHorse>=numberHorse);
           system("cls");

       move = rand()%roll +1;
       cout<<name[i]<<" roll is "<<move<<endl;
       if(horse[i][chooseHorse]+move > size*size ){
           cout<<name[i]<<" cannot move!\n"<<endl;

       }
       else{
      horse[i][chooseHorse]+= move;
       cout<<name[i]<<" move forward "<<move<<" step \n"<<endl;
       if(horse[i][chooseHorse]==size*size ){
           system("cls");

         cout<<name[i]<<" is the winner !!\n\n\n"<<endl;

           win[i] +=1;
           winner = 1;
           break;
       }
       
       }
       for(int j=0;j<numberPlayer;j++){
           for(int o=0; o<numberHorse;o++)
           if(horse[i][chooseHorse]==horse[j][o]&&i!=j){
               horse[j][o]=0;
               cout<<name[i]<<" kicked "<<name[j]<<" to the start !"<<endl;
               break;
           }
       }
       
       
    
        
             

    }
    }
   setBoard(board,name,pos,horse,size,numberPlayer,numberHorse);
    printBoard(board, map,size);

}
void printBoard2(char board[][6],int map[][7],int size){
    for( int i=0; i<size; i++){
        for(int j =0 ; j<size; j++){
        cout<<" ------";
        } cout<<endl<<"|";
        for( int j = 0; j<size; j++){
            cout<<"      |";
        }cout<<endl<<"|";
        for(int j =0;j<size;j++){
        cout<< setw(5) << left<<board[map[i][j]]<<" |";
        }
        cout<<endl<<"|";
        for( int j = 0; j<size; j++){
            cout<<"      |";
        }cout<<endl;
    }
    for(int j =0 ; j<size; j++){
        cout<<" ------";}cout<<endl;
}
void setBoard2(char board[][6], char name[][6],int pos[],int horse[][4], int size, int numberPlayer,int numberHorse){
for (int i=0;i<=size*size;i++){
        memcpy(board[i],"     ",6);
    }
for(int i =0;i<numberPlayer;i++){
    for(int j =0;j<numberHorse;j++){
        memcpy(board[horse[i][j]],name[i],6);
        
    }


    }
}
void playGame2(char board[][6],char name[][6],int pos[],int map[][7],int horse[][4],float win[], int size, int numberPlayer,int numberHorse,int roll){
    
    int move;
     int winner = 0;
    

    while(winner == 0){ 
        
               
       int chooseHorse;
       srand(time(NULL));
       for(int i =0;i<numberPlayer;i++){
            setBoard2(board,name,pos,horse,size,numberPlayer,numberHorse);

    printBoard2(board, map,size);
     
           cout<<name[i]<<" turn"<<endl;
           do{
            cout<<"which horse your want to move? ";cin>>chooseHorse;
            chooseHorse -=1;
            if(chooseHorse >=numberHorse) cout<<"invalid choosed, please choose again\n";
           }
            while(chooseHorse>=numberHorse);
           system("cls");

       move = rand()%roll +1;
       cout<<name[i]<<" roll is "<<move<<endl;
       if(horse[i][chooseHorse]+move > size*size ){
           cout<<name[i]<<" cannot move!\n"<<endl;

       }
       else{
      horse[i][chooseHorse]+= move;
       cout<<name[i]<<" move forward "<<move<<" step \n"<<endl;
       if(horse[i][chooseHorse]==size*size ){
           system("cls");

           cout<<name[i]<<" is the winner !!\n\n\n"<<endl;
           win[i] +=1;

           winner = 1;
           break;
       }
       
       }
       for(int j=0;j<numberPlayer;j++){
           for(int o=0; o<numberHorse;o++)
           if(horse[i][chooseHorse]==horse[j][o]&&i!=j){
               horse[j][o]=0;
               cout<<name[i]<<" kicked "<<name[j]<<" to the start !"<<endl;
               break;
           }
       }
       
      
        

    }
    }
   setBoard2(board,name,pos,horse,size,numberPlayer,numberHorse);
   
    printBoard2(board, map,size);
 
}
int main(){
           system("cls");

    cout<<"WELCOME TO HORSE BOARD GAME\n\n";
    int size,roll,numberPlayer,typeMap,numberHorse;
    cout<<"enter size of map: \n";
    do{
    cout<<"3. Map 3x3.\n";
    cout<<"5. Map 5x5.\n";
    cout<<"7. Map 7x7.\n";
    
    cin>>size;
    if(size!=3 && size !=5 && size != 7)
    cout<<"Invalid choice, please choose again!\n";
    }
    while(size!=3 && size !=5 && size != 7);
    cout<<"enter type of map: \n";
    do{
    cout<<"1.Zig Zag Map.\n";
    cout<<"2.Spiral Map .\n";
    cin>>typeMap;
    if(typeMap!=1 && typeMap !=2)
    cout<<"Invalid choice, please choose again!\n";

    }
    while(typeMap!=1 && typeMap !=2);
    cout<<"enter range of roll: ";cin>>roll;
    do {
    cout<<"enter number of player( <=4 ): ";
    cin>>numberPlayer;
     if(numberPlayer >4)
     cout<<"Invalid number, please choose again!\n";}
     while(numberPlayer>4);
     do {
    cout<<"enter number of horse( <=4 ): ";cin>>numberHorse;
if(numberHorse >4)
     cout<<"Invalid number, please choose again!\n";}
     while(numberHorse>4);
    char name[numberPlayer][6];
    char board[size*size][6];
    int horse[numberPlayer][4];
    int pos[numberPlayer*numberHorse];
    float win[numberPlayer];
    int map5_2[5][5]={{1,2,3,4,5},{16,17,18,19,6},{15,24,25,20,7},{14,23,22,21,8},{13,12,11,10,9}};
    int map5_1[5][5]={{1,2,3,4,5},{10,9,8,7,6},{11,12,13,14,15},{20,19,18,17,16},{21,22,23,24,25}};
    int map3_1[3][3]={{1,2,3},{6,5,4},{7,8,9}};
    int map3_2[3][3]={{1,2,3},{8,9,4},{6,7,5}};
    int map7_1[7][7]={{1,2,3,4,5,6,7},{14,13,12,11,10,9,8},{15,16,17,18,19,20,21},{28,27,26,25,24,23,22},{29,30,31,32,33,34,35},{42,41,40,39,38,37,36},{43,44,45,46,47,48,49}};
    int map7_2[7][7]={{1,2,3,4,5,6,7},{24,25,26,27,28,29,8},{23,40,41,42,43,30,9},{22,39,48,49,44,31,10},{21,38,47,46,45,32,11},{20,37,36,35,34,33,12},{19,18,17,16,15,14,13}};
     
     
    
    for(int i=0;i<numberPlayer;i++){
             cout<<"enter name of player "<<i+1<<"(<=5 characters): ";
        win[i]=0.0;
        cin>>name[i];
    }
    cout<<endl;
           system("cls");
           int color;
    

    int repeat = 1;
    int count =0;
    while(repeat == 1){
        for(int i = 0;i<numberPlayer;i++){
         for(int j=0;j<4;j++){
        horse[i][j]= 0;
        
    }
        }
        cout<<"Custom color: \n1. Black and white\n2. Red and white\n3. Blue and white\n4. Red and green\n5. Green and blue\n";
    do{
    cin>>color;
    if(color ==1)
    system("color 07");
    else if (color ==2)
    system("color 47");
    else if (color ==3)
    system("color 17");
    else if (color ==4)
    system("color 42");
    else if (color ==5)
    system("color 21");
    else 
    cout<<"Invalid choice, please choose again!";
    
    }
    while(color>5||color<1);
           system("cls");
    if(size==3&&typeMap==1)
        playGame(board,name,pos,map3_1,horse,win,size,numberPlayer,numberHorse, roll);

     if(size==3&&typeMap==2)
         playGame(board,name,pos,map3_2,horse,win,size,numberPlayer,numberHorse, roll);
     if(size==5&&typeMap==1)
         playGame1(board,name,pos,map5_1,horse,win,size,numberPlayer,numberHorse, roll);
     if(size==5&&typeMap==2)
          playGame1(board,name,pos,map5_2,horse,win,size,numberPlayer,numberHorse, roll);
     if(size==7&&typeMap==1)
         playGame2(board,name,pos,map7_1,horse,win,size,numberPlayer,numberHorse, roll);
     if(size==7&&typeMap==2)
         playGame2(board,name,pos,map7_2,horse,win,size,numberPlayer,numberHorse, roll);
         cout<<"Do you wanna play again? \n Press 1 to play again and any key to quit!";
         cin>>repeat;
           system("cls");   
           count ++;
    }
    cout<<"Total game is "<<count<<endl;
    for(int i=0;i<numberPlayer;i++)
    cout<<"Percentage "<<name[i]<<" win is "<<win[i]*100/count<<" %"<<endl;
    system("pause");
    return 0;

}