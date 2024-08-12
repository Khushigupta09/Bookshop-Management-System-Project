#include<iostream>
#include<conio.h>
using namespace std;
int i=0;
class book_var{  
    public:
       int book_id,price,pages;
       string name,author,publishers;

       book_var(){
        book_id=0;
        name="";
        author="";
        publishers="";
        price=0;
        pages=0;
       }
        
}b[20];

class book_fun:public book_var{
   public:
     void menu();
     void add();
     void search();
     void update();
     void del();
     void show();
	 };

void book_fun::menu(){
    p:
    system("cls");
    int choice;
    cout<<"===============================================BOOK SHOP MANAGEMENT SYSTEM===============================================";
    cout<<"\n\n 1. Add New Book";
    cout<<"\n\n 2. Search Book";
    cout<<"\n\n 3. Update Book";
    cout<<"\n\n 4. Delete Book";
    cout<<"\n\n 5. Show Books";
    cout<<"\n\n 6. Exit";
     cout<<"\n\n ========================";
    cout<<"\n\n Enter Your Choice (1-6): ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        search();
        break;
    case 3:
        update();
        break;
    case 4:
        del();
        break;
    case 5:
        show();
        break;
    case 6:
        exit(0);
        break;    
    default:
        cout<<"\n\n ----Invalid Choice! Please Try Again----";
    }
    getch();
    goto p;
}

void book_fun::add(){
    p:
    system("cls");
    int choice;
    cout<<"===============================================BOOK SHOP MANAGEMENT SYSTEM==============================================";
    cout<<"\n\n Book ID : ";
    cin>>b[i].book_id;
    for(int a=0;a<i;a++)
    {
         if(b[i].book_id == b[a].book_id)
         {
            cout<<"\n\n ----Book ID Already Exist----";
            getch();
            goto p;
         }
    }

    cout<<"\n\n Book Name : ";
    cin>>b[i].name;
    cout<<"\n\n Author Name : ";
    cin>>b[i].author;
    cout<<"\n\n Publisher Name : ";
    cin>>b[i].publishers;
    cout<<"\n\n Pages : ";
    cin>>b[i].pages;
    cout<<"\n\n Price : ";
    cin>>b[i].price;
    cout<<"\n\n\n\t\t----New Book Add Successfully----";
    i++;
}

void book_fun::search(){
    system("cls");
    int id,found=0,choice;
    string name;
    cout<<"===============================================BOOK SHOP MANAGEMENT SYSTEM==============================================";
    if(i == 0)
    {
        cout<<"\n\n\n ----Data Base is Empty----";
    }
    else{
        cout<<"\n\n 1. According Book ID";
        cout<<"\n\n 2. According Book Name";
        cout<<"\n\n 3. According Author Name";
        cout<<"\n\n\n Enter Your Choice : ";
        cin>>choice;
        if(choice == 1)
        {
            cout<<"\n\n Book ID : ";
            cin>>id;
            system("cls");
            cout<<"===============================================BOOK SHOP MANAGEMENT SYSTEM==============================================";
            for (int a = 0; a < i; a++)
            {
                if(id == b[a].book_id){
                cout<<"\n\n Book ID : "<<b[a].book_id;
                cout<<"\n\n Book Name : "<<b[a].name;
                cout<<"\n\n Author Name : "<<b[a].author;
                cout<<"\n\n Publisher Name : "<<b[a].publishers;
                cout<<"\n\n Pages: "<<b[a].pages;
                cout<<"\n\n Price : "<<b[a].price;
                cout<<"\n\n ========================";
                found++;
              }
         }
          
        if(found==0){
            cout<<"\n\n ----Book ID Not Found----";
        }
    }
    else if(choice == 2){
            cout<<"\n\n Book Name : ";
            cin>>name;
            system("cls");
            cout<<"===============================================BOOK SHOP MANAGEMENT SYSTEM==============================================";
            for (int a = 0; a < i; a++)
            {
                if(name == b[a].name){
                cout<<"\n\n Book ID : "<<b[a].book_id;
                cout<<"\n\n Book Name : "<<b[a].name;
                cout<<"\n\n Author Name : "<<b[a].author;
                cout<<"\n\n Publisher Name : "<<b[a].publishers;
                cout<<"\n\n Pages: "<<b[a].pages;
                cout<<"\n\n Price : "<<b[a].price;
                cout<<"\n\n ========================";
                found++;
            }
        }
        if(found==0)
        {
            cout<<"\n\n ----Book Name Not Found----";
            
          }
    } 
    else if(choice == 3){
            cout<<"\n\n Author Name : ";
            cin>>name;
            system("cls");
            cout<<"===============================================BOOK SHOP MANAGEMENT SYSTEM==============================================";
            for (int a = 0; a < i; a++)
            {
                if(name == b[a].author){
                cout<<"\n\n Book ID : "<<b[a].book_id;
                cout<<"\n\n Book Name : "<<b[a].name;
                cout<<"\n\n Author Name : "<<b[a].author;
                cout<<"\n\n Publisher Name : "<<b[a].publishers;
                cout<<"\n\n Pages: "<<b[a].pages;
                cout<<"\n\n Price : "<<b[a].price;
                cout<<"\n\n ========================";
                found++;
            }
        }
        if(found==0)
        {
            cout<<"\n\n ----Author Name Not Found----";
            
          }
    }

}
}

void book_fun::update(){
    system("cls");
    int id,found=0;
    cout<<"===============================================BOOK SHOP MANAGEMENT SYSTEM==============================================";
    if(i == 0)
    {
        cout<<"\n\n\n ----Data Base is Empty----";
    }
    else{
            cout<<"\n\n Book ID For Update : ";
            cin>>id;
            for (int a = 0; a < i; a++)
            {
                if(id == b[a].book_id){

                system("cls");
                cout<<"===============================================BOOK SHOP MANAGEMENT SYSTEM==============================================";
                cout<<"\n\n Book ID : ";
                cin>>b[a].book_id;
                cout<<"\n\n Book Name : ";
                cin>>b[a].name;
                cout<<"\n\n Author Name : ";
                cin>>b[a].author;
                cout<<"\n\n Publisher Name : ";
                cin>>b[a].publishers;
                cout<<"\n\n Pages: ";
                cin>>b[a].pages;
                cout<<"\n\n Price : ";
                cin>>b[a].price;
                cout<<"\n\n\n\t\t----Update Book Successfully----";
                found++;
                }

    }
    if(found==0){
        cout<<"\n\n ----Book ID Not Found----";
    }
 }
}

void book_fun::del(){
    system("cls");
    int id,found=0;
    cout<<"===============================================BOOK SHOP MANAGEMENT SYSTEM==============================================";
    if(i == 0)
    {
        cout<<"\n\n\n ----Data Base is Empty----";
    }
    else 
    {
      cout<<"\n\n Book ID For Delete : ";
      cin>>id;
            for (int a = 0; a < i; a++)
            {
                if(id == b[a].book_id){ 
                   for(int k=a;k<i;k++){
                       b[k].book_id=b[k+1].book_id;
                       b[k].name=b[k+1].name;
                       b[k].author=b[k+1].author;
                       b[k].publishers=b[k+1].publishers;
                       b[k].pages=b[k+1].pages;
                       b[k].price=b[k+1].price;
                   }

                cout<<"\n\n\n\t\t----Delete Book Successfully----";
                i--;
                found++;
                }
    }
    if(found == 0){
        cout<<"\n\n ----Book ID Not Found----";
    }

  }
}

void book_fun::show(){
    system("cls");
    cout<<"===============================================BOOK SHOP MANAGEMENT SYSTEM==============================================";
    if(i == 0)
    {
        cout<<"\n\n\n ----Data Base is Empty----";
    }
    else{
        for(int a=0;a<i;a++){
                cout<<"\n\n Book ID : "<<b[a].book_id;
                cout<<"\n\n Book Name : "<<b[a].name;
                cout<<"\n\n Author Name : "<<b[a].author;
                cout<<"\n\n Publisher Name : "<<b[a].publishers;
                cout<<"\n\n Pages: "<<b[a].pages;
                cout<<"\n\n Price : "<<b[a].price;
                cout<<"\n\n ========================";
        }
    }
}

int main(){
     book_fun obj;
     obj.menu();

   return 0;}

