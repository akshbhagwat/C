// Program to find Maximum and Minimum value

int MAXIMUM(int Elements[20],int Max,int Num)
{
	int i = 0;//,Elements[20],Max = 0;
	Max = Elements[0];
	for(i = 1 ; i < Num ; i++)
	if(Elements[i] > Max)
	Max = Elements[i];
	return Max;
}
int MINIMUM(int Elements[20],int Min,int Num)
{
	int i = 0;
	Min = Elements[0];
	for(i = 1 ; i < Num ; i++)
	if(Elements[i] < Min)
	Min = Elements[i];
	return Min;
}
