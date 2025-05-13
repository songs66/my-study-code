#include<bits/stdc++.h>
using namespace std;
class settype  
{
private:
	int *set;//数组指针
	int n;//元素的个数
	
	void freememory()
	{
		if(set!=NULL)
		{
			delete[] set;
		}
	}
	void unique()
	{
		if(n>0)
		{
			sort(set,set+n);
			int* temp=new int[n];
			int count=1;
			temp[0]=set[0];
			for(int i=1;i<n;i++)
			{
				if(set[i]!=set[i-1])
				{
					temp[count++]=set[i];
				}
			}
			delete[] set;
			n=count;
			set =new int[n];
			memcpy(set,temp,n*sizeof(int));
			delete[] temp;
		}
	}
public:
	settype():set(NULL),n(0){}
	settype(int* a,int num):n(num),set(new int[num])
	{
		for(int i=0;i<num;i++)
		{
			set[i]=a[i];
		}
	}
	settype(const settype& B):n(B.n),set(new int[B.n])
	{
		for(int i=0;i<n;i++)
		{
			set[i]=B.set[i];
		}
	}
	~settype()
	{
		freememory();
	}
    void setdata(int *a, int num)
    {
    	freememory();
    	n=num;
    	set=new int[n];
    	for(int i=0;i<num;i++)
		{
			set[i]=a[i];
		}
	}
	void getdata(int *a, int& num)
	{
		num=n;
        for(int i=0;i<n;++i)
		{
            a[i]=set[i];
        }
	}
	int get_n()
	{
		return n;
	}

	settype operator+(settype B)
	{
		int* temp=new int[n+B.n];
		for(int i=0;i<n;i++)
		{
			temp[i]=set[i];
		}
		for(int i=0;i<B.n;i++)
		{
			temp[n+i]=B.set[i];
		}
		settype result(temp,n+B.n);
		delete[] temp;
		result.unique();
		return result;
	}
	settype operator*(settype B)
	{
		int* temp=new int[min(n,B.n)];
		int count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<B.n;j++)
			{
				if(set[i]==B.set[j])
				{
					temp[count++]=set[i];
					break;
				}
			}
		}
		settype result(temp,count);
		delete[] temp;
		result.unique();
		return result;
	}
    settype operator-(settype B) 
	{
        int* temp = new int[n];
        int count = 0;
        for (int i = 0; i < n; i++) 
		{
            bool found = false;
            for (int j = 0; j < B.n; j++) 
			{
                if (set[i] == B.set[j]) 
				{
                    found = true;
                    break;
                }
            }
            if (!found) 
			{
                temp[count++] = set[i];
            }
        }
        settype result(temp, count);
        delete[] temp;
        return result;
    }
//	settype operator-(settype B)
//	{
//		int* temp=new int[n];
//		settype t=*this*B;
//		int count=0;
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<t.n;j++)
//			{
//				if(set[i]!=t.set[j])
//				{
//					temp[count++]=set[i];
//				}
//			}
//		}
//		settype result(temp,count);
//		delete[] temp;
//		result.unique();
//		return result;
//	}
	settype operator=(settype B)
	{
		if(this!=&B)
		{
			freememory();
			n=B.n;
			set=new int[n];
			for (int i = 0; i < n; ++i) 
			{
            	set[i] = B.set[i];
        	}
		}
		return *this;
	}
	friend istream&operator>>(istream& is,settype& t)
	{
		int num;
		is>>num;
		t.n=num;
		t.set=new int[num];
		for(int i=0;i<num;i++)
		{
			is>>t.set[i];
		}
		return is;
	}
    friend ostream& operator<<(ostream& os,settype& t) 
	{
		t.unique();
        os << "{";
        if (t.n > 0) 
		{
            os << t.set[0];
            for (int i = 1; i < t.n; i++) 
			{
                os << "," << t.set[i];
            }
        }
        os << "}"<<endl;
        return os;
    }
//	friend ostream&operator<<(ostream& os,settype& t)
//	{
//		os<<"{"<<t.set[0];
//		for(int i=1;i<t.n;i++)
//		{
//			os<<","<<t.set[i];
//		}
//		os<<"}"<<endl;
//	}
};
int main()
{ 
	settype A, B, C;  
	cin>>A>>B;

	cout<<"A="<<A;
	cout<<"B="<<B;

	C=A+B;
	cout<<"A+B="<<C;

	C=A*B;
	cout<<"A*B="<<C;

	C=A-B;
	cout<<"A-B="<<C;
	return 0;
}
