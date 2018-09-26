int GiaiThua(int n)
{
	if( n == 1)
		return 1;
	return n*GiaiThua(n-1);
}

int Fib(int n) // so fibnaci thu n;
{
	if(n <= 2)
		return 1;
	return Fib(n-2) + Fib(n-1);
}

void ThapHaNoi(int n, char c1, char c2, char c3) // bai toan thap ha noi;
{									    // n: so tang thap; c1 c2 c3 vi tri;
	if(n == 1)
	{
		cout<<c1<<" -----> "<<c3<<endl;  // dieu kien dung: neu c1 co 1 tang thi chuyen luon sang c3;	
	}
	else
	{
		ThapHaNoi(n-1, c1, c3, c2); // chuyen n-1 tang tu c1 sang c2;
		ThapHaNoi(1, c1, c2, c3); // chuyen 1 thang tu c1 sang c3;
		ThapHaNoi(n-1,c2,c1,c3);	// chuyen n-1 tang tu c2 sang c3;
	}
}
void KhoiTaoBanCo(char bc[][100], int n)
{
	for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            bc[i][j] = '-';
}

void InBanCo(char  bc[][100], int n)
{
	for(int i = 1;i<=n; i++)
	{
		for(int j = 1; j<=n;j++)
			cout<<bc[i-1][j-1]<<" ";
        cout<<endl;
	}
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
}

bool XepDuocHau(int x, int y, char bc[][100], int n)
{
	 	for(int j = 1; j<y; j++) // check cot;
		   if (bc[x-1][j-1] == 'H')
		       return false;
		for(int i = x-1, j=y-1; i>=1, j>=1; i--, j--)
		{
		    if (bc[i-1][j-1] == 'H')// check cheo tren;
		       return false;
		}
		for(int i = x+1, j=y-1; i<=n, j>=1; i++, j--)
		{
		    if (bc[i-1][j-1] == 'H')// check cheo duoi;
		        return false;
		}
		return true;	
}
void XepHau(int c, char bc[][100], int n)// cot c;
{
	if(c>n)
		InBanCo(bc,n); // Het ban co thi in;
	else
	{
		for(int i = 1;i<= n;i++)
		{
			if(XepDuocHau(i,c,bc,n))
			{
				bc[i-1][c-1] = 'H';
				XepHau(c+1, bc, n);
		          bc[i-1][c-1] = '-';
			}
		}
	}
}















