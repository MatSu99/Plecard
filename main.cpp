#include<iostream>
#include<vector>

int main()
{
std::ios_base::sync_with_stdio(false);
std::vector<int> stock;
int posters=0;
int buildings;
int ignore;
int height_temp;
std::cin >> buildings;

if(buildings==1)
{
    std::cout << 1 ;
    return 0;
}

std::cin >> ignore;
std::cin >> height_temp;
stock.push_back(height_temp);

for(int i =1;i<buildings;i++)
{
    std::cin >> ignore;
    std::cin >> height_temp;
    while(height_temp < stock.back())
    {
        stock.pop_back();
        ++posters;
        if (stock.empty()==true)
        {
            stock.push_back(height_temp);
            break;
        }
    }

    if(height_temp > stock.back())
        stock.push_back(height_temp);
    else
        continue;


}

if (stock.empty()==false)
posters = posters + stock.size();

std::cout << posters;

return 0;
}
