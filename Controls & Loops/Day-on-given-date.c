#include <stdio.h>
int isValid(int, int, int);
int isLeap(int);
int main()
{
	int dd, mm, yy, weekday, i = 0, k = 0;
	printf(" Enter a date(dd/mm/yyyy) - ");
	scanf("%d/%d/%d", &dd, &mm, &yy);
	if (isValid(dd, mm, yy) != 1)
		printf(" Invalid date");
	else
	{
		switch (mm)
		{
		case 12:
			i += 30;
		case 11:
			i += 31;
		case 10:
			i += 30;
		case 9:
			i += 31;
		case 8:
			i += 31;
		case 7:
			i += 30;
		case 6:
			i += 31;
		case 5:
			i += 30;
		case 4:
			i += 31;
		case 3:
			i += 28;
		case 2:
			i += 31;
		case 1:
			i += 0;
		}
		if (mm > 2)
		{
			if (isLeap(yy))
				i++;
		}
		for (int j = 1800; j <= yy; j = j + 100)
		{
			if (j % 100 == 0)
			{
				if (j % 400 != 0)
					k++;
			}
		}

		if (yy < 1752)
		{
			weekday = ((yy - 1) + ((yy - 1) / 4) + dd + i) % 7;
		}
		else
			weekday = ((yy - 1) + ((yy - 1) / 4) + dd + i - 11 - k) % 7;

		switch (weekday)
		{
		case 1:
			printf(" The Day on this date - Saturday");
			break;
		case 2:
			printf(" The Day on this date - Sunday");
			break;
		case 3:
			printf(" The Day on this date - Monday");
			break;
		case 4:
			printf(" The Day on this date - Tuesday");
			break;
		case 5:
			printf(" The Day on this date - Wednesday");
			break;
		case 6:
			printf(" The Day on this date - Thursday");
			break;
		case 0:
			printf(" The Day on this date - Friday");
			break;
		}

		return 0;
	}
}

int isValid(int dd, int mm, int yy)
{
	int valid = 1;
	if (dd < 1 || dd > 31 || mm < 1 || mm > 12 || yy < 1)
		valid = 0;
	else if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
	{
		if (mm == 9 && yy == 1752)
		{
			if (dd > 2 && dd < 14 || dd > 30)
				valid = 0;
		}
		else
		{
			if (dd > 30)
				valid = 0;
		}
	}
	else if (mm == 2)
	{
		if (isLeap(yy))
		{
			if (dd > 29)
				valid = 0;
		}
		else
		{
			if (dd > 28)
				valid = 0;
		}
	}
	return valid;
}

int isLeap(int y)
{
	if ((y < 1752 && y % 4 == 0) || (y % 100 != 0 && y % 4 == 0) || y % 400 == 0)
		return 1;
	else
		return 0;
}
