#use FIXED_IO( B_outputs=PIN_B7,PIN_B6,PIN_B5,PIN_B4,PIN_B3,PIN_B2,PIN_B1,PIN_B0 )
#define G   PIN_B0
#define B   PIN_B1
#define C   PIN_B2
#define D   PIN_B3
#define E   PIN_B4
#define F   PIN_B5
#define A   PIN_B6
#define H   PIN_B7   //nokta-(dot)

void ssd(x)
{
   if(x==0)
   {
      output_B(0x7E);
      break;
   }
   if(x==1)
   {
      output_B(0x18);
      break;
   }
   if(x==2)
   {
      output_B(0x6D);
      break;
   }
   if(x==3)
   {
      output_B(0x3D);
      break;
   }
   if(x==4)
   {
      output_B(0x1B);
      break;
   }
   if(x==5)
   {
      output_B(0x37);
      break;
   }
   if(x==6)
   {
      output_B(0x77);
      break;
   }
   if(x==7)
   {
      output_B(0x1C);
      break;
   }
   if(x==8)
   {
      output_B(0x7F);
      break;
   }
   if(x==9)
   {
      output_B(0x3F);
      break;
   }
}


