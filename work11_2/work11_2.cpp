#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
using namespace std;

int main( )
{
	int i;
	char name[] = "";
	FILE *fp;

	if ((fp = fopen("f1.txt", "w")) == NULL) {
		cout << "File could not be opened" <<endl;
		exit(1);
	}
	cout << "Enter the number" << endl;
	for (i = 1; i <= 5; i++)
	{
		cout << "Name" << i<<" ";
		cin >> name;
		int k = strlen(name);
		fprintf(fp, "Name%d %s Letters %d\n", i, name,k);
	}
	fclose(fp);

	cout << endl << endl;
	if ((fp = fopen("f1.txt", "r")) == NULL) {
		cout << "File could not be opened" << endl;
		exit(1);
	}

	char s1[50],s2[50];
	int b;
	for (i = 1; i <=5; i++)
	{
	  	fscanf(fp, "%s", &s1);
		fscanf(fp, "%d", &b);
		fscanf(fp, "%s", &s1);
		fscanf(fp, "%s", &s2);
		fscanf(fp, "%d", &b);
		if (b==4)
		{
			cout << s1 << endl;
		}
	}
	fclose(fp);

	system("pause");
	return 0;

}