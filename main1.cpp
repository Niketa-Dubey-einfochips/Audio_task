#include<iostream>
#include<fstream>
using namespace std;

class File_N
{
  public:
      char filename[1024];
      int i;
    virtual void input_file() = 0;
//     {
//         cout<<"Enter the filename"<<endl;
//         cin>>filename;
// }
};

//Just for testing
////hey this is for testing first PR
class WAV : public File_N
{
    public:
    string arr="RIFF";
    char filename[1024];
    int i;
    char a[4];
    int size =4;
    string s = "";
    int flag=0;
    public:

    //void input_file()
    void input_file()
    {
       {
        cout<<"Enter the filename"<<endl;
        cin>>filename;
}

    }
    // void input_WAV()
    // {
    //     cout<<"Enter the filename"<<endl;
    //     cin>>filename;

    // }
    void read_WAV()
    {
        ifstream infile(filename,fstream::in);
        for (i = 0; i < size; i++)
        {
            infile >> a[i];
            s = s + a[i];
        }      
        //cout<<s ;    
    }
    void compare_WAV()
    {
        if(s==arr)
        {
            flag=1;
        }
        if(flag==1)
        {
            cout<<endl;
            cout<<"The file type is WAV"<<endl;
        }
    }
};
class FLAC :public File_N
{
     public:
    string arr="fLaC";
    char filename[1024];
    int i;
    char a[4];
    int size =4;
    string s = "";
    int flag=0;
    public:
    void input_file()
     {
        cout<<"Enter the filename"<<endl;
        cin>>filename;
}
    // void input_FLAC()
    // {
    //     cout<<"Enter the filename"<<endl;
    //     cin>>filename;

    // }
    void readFLAC()
    {
        ifstream infile(filename,fstream::in);
        for (i = 0; i < size; i++)
        {
            infile >> a[i];
            s = s + a[i];
        }      
        //cout<<s ;    
    }
    void compare_FLAC()
    {
        if(s==arr)
        {
            flag=1;
        }
        if(flag==1)
        {
            cout<<endl;
            cout<<"The file type is FLAC"<<endl;
        }
    }

};

class OGG :public File_N
{
    public:
    string arr="OggS";
    char filename[1024];
    int i;
    char a[4];
    int size =4;
    string s = "";
    int flag=0;
    public:
    void input_file()
     {
        cout<<"Enter the filename"<<endl;
        cin>>filename;
}
    // void input()
    // {
    //     cout<<"Enter the filename"<<endl;
    //     cin>>filename;

    // }
    void readwav()
    {
        ifstream infile(filename,fstream::in);
        for (i = 0; i < size; i++)
        {
            infile >> a[i];
            s = s + a[i];
        }      
        //cout<<s ;    
    }
    void compare()
    {
        if(s==arr)
        {
            flag=1;
        }
        if(flag==1)
        {
            cout<<endl;
            cout<<"The file type is OGG"<<endl;
        }
    }
};

int main()
{
  //File_N *f1;
  WAV w1;
  w1.input_file();
  w1.read_WAV();
  //f1 = &w1;
   // w1.input_WAV();
   // w1 = &File_N;
  w1.compare_WAV();
  cout<<"end of the program"<<endl;
}








