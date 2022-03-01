#include <iostream>

void DrawSquare(int size)
{
    if(size==1)
    {
        std::cout<<"#"<<std::endl;
        return;
    }
    std::string tib = std::string(size,'#');
    std::string inside = "#" + std::string(size-2,' ') + "#";
    std::cout << tib << std::endl;
    for(int i=0; i<size-2;i++)
    {
        std::cout<<inside<<std::endl;
    }
    std::cout << tib << std::endl;

}

void DrawSquare(int size,bool rD, bool lD)
{
    if(rD)
    {
        if(lD)
        {
            std::cout << std::string(size,'#') << std::endl;
            int ndr=size-2;
            int ndl=1;
            for(int i=1;i<size-1;i++)
            {
                std::cout<<"#";
                for(int j=1;j<size-1;j++)
                {
                    if(j==ndr || j==ndl)
                    {
                        std::cout<<"#";
                    }
                    else
                    {
                    std::cout<<" ";
                    }
                }
                std::cout<<"#"<< std::endl;
                ndr--;
                ndl++;
            }
            std::cout << std::string(size,'#') << std::endl;
        }
        else
        {
            std::cout << std::string(size,'#') << std::endl;
            int nd=size-2;
            for(int i=1;i<size-1;i++)
            {
                std::cout<<"#";
                for(int j=1;j<size-1;j++)
                {
                    if(j==nd)
                    {
                        std::cout<<"#";
                    }
                    else
                    {
                    std::cout<<" ";
                    }
                }
                std::cout<<"#"<< std::endl;
                nd--;
            }
            std::cout << std::string(size,'#') << std::endl;
        }
    }
    else
    {
        if(lD)
        {
            std::cout << std::string(size,'#') << std::endl;
            int nd=1;
            for(int i=1;i<size-1;i++)
            {
                std::cout<<"#";
                for(int j=1;j<size-1;j++)
                {
                    if(j==nd)
                    {
                        std::cout<<"#";
                    }
                    else
                    {
                    std::cout<<" ";
                    }
                }
                std::cout<<"#"<< std::endl;
                nd++;
            }
            std::cout << std::string(size,'#') << std::endl;
        }
        else
        {
            DrawSquare(size);
        }
    }
    return;

}

int main()
{
    int size = 0;
    std::cout << "Podaj rozmiar(>=1): ";
    std::cin >>size;
    while (size<1)
    {
        std::cout<< "Podaj liczbę większą od 0: ";
    }
    int rDFN=0,lDFN=0;
    bool rDF=false;
    bool lDF=false;
    std::cout << "Czy prawa przekatna: "<<std::endl<<"[1]Tak"<<std::endl<<"[2]Nie"<<std::endl;
    std::cin >>rDFN;
    if(rDFN==1)
        rDF=true;
    std::cout << "Czy lewa przekatna: "<<std::endl<<"[1]Tak"<<std::endl<<"[2]Nie"<<std::endl;
    std::cin >>lDFN;
    if(lDFN==1)
        lDF=true;
    DrawSquare(size,rDF,lDF);

    return 0;
}