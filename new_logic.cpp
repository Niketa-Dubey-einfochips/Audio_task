
#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    string arr[] = { "RIFF", "fLaC"};
    //const char *filename = "/home/niketa/audio_file/file_example_WAV_1MG.wav";
    fstream p1;
    char filename[1024];
    cout<<"enter the file path "<<endl;
    cin>>filename;
    ifstream infile(filename, fstream::in);
   // fstream p1;
    //char filename[1024];
   // cout<<"enter the file path "<<endl;
   // cin>>filename;
   // p1 = fstream(filename , ios::in );
    //int flag;
    
    //p1.open("filename")
    
   // for ( i=0 ; i<3; i++)
    
//    {
    int i;
    char a[4];
    int size =4;
    string s = "";
    for (i = 0; i < size; i++) {
        infile >> a[i];
        s = s + a[i];
    }
    cout<<s ;
    int flag = 0;
    for( int j = 0 ; j<2 ; j++)
    {
        if (s == arr[j])
        {
            cout<<"sucesss";
            flag = 1;
        }
        
    }
       //else
        //{
          //  cout<<"fail";
            //break;
        //}
        
    if(flag == 1)
    {
        cout<<endl;
        cout<<"file type"<<s;
    }
    else 
    {
        cout<<"not valid";
    }
        //string s1 = str.append()
       // if(arr[i] != )
    //}
    
    //if name==arr[4]then p file found
   // cout<<"Hello World";

    //return 0;
}