#include <iostream>
#include <string>
using namespace std;

int swap(int *pa, int *pb)
{
    int tmp;

	cout << *pa;
	cout << *pb;

    tmp = *pa;
    *pa = *pb;
    *pb = tmp;

	cout << *pa;
	cout << *pb;
    return 0;
}

int minmax(int *p, int n, int *pmin, int *pmax)
{
    int *i(0);
    *pmin=*p;
    *pmax=*p;

    for (i=p ; i<p+n ; i++)
    {
        if (*i < *pmin) *pmin = *i;
        if (*i > *pmax) *pmax = *i;
    }

	cout << *pmin;
	cout << *pmax;

    return 0;	
}

int fillfive(int *p)
{
	int i = 0;
	int value = 0;
	while (i < 5)
	{
		cout << "Entrez un nombre";
		cin >> value;
		*p = value;
		*p++;
	}
}

int main(int argc, char *argv[]) {
 	int tn[] = { 12, 23, 36, 5, 46, 9, 25 };
    int min, max, r;

    r = minmax(tn, sizeof(tn)/sizeof(int), &min, &max);
    cout << "Min, Max : " << min << " " << max << endl;
    return 0;
}