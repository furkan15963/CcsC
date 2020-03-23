// ISIKFurkan ->  creaph.com
// 0.56 inch Cathode Seven Segment Digit LED Display

// Display Pin Layout
// Pin1  -> Anode E        Pin6  -> Anode B
// Pin2  -> Anode D        Pin7  -> Anode A
// Pin3  -> VCC            Pin8  -> VCC
// Pin4  -> Anode C        Pin9  -> Anode F
// Pin5  -> Dot-H          Pin10 -> Anode G

// ssd(99); -->>  . (dot) -> Puts a Point

#use FIXED_IO( B_outputs=PIN_B7,PIN_B6,PIN_B5,PIN_B4,PIN_B3,PIN_B2,PIN_B1,PIN_B0 )
#define G   PIN_B0   // Pin10
#define F   PIN_B1   // Pin9
#define A   PIN_B2   // Pin7
#define B   PIN_B3   // Pin6
#define C   PIN_B4   // Pin4
#define D   PIN_B5   // Pin2
#define E   PIN_B6   // Pin1
#define H   PIN_B7   // Pin5 (dot)

void ssd(x)
{
   switch(x)
   {
      case 0:
            output_B(0x7E);
            break;
      case 1:
            output_B(0x18);
            break;
      case 2:
            output_B(0x6D);
            break;
      case 3:
            output_B(0x3D);
            break;
      case 4:
            output_B(0x1B);
            break;
      case 5:
            output_B(0x37);
            break;
      case 6:
            output_B(0x77);
            break;
      case 7:
            output_B(0x1C);
            break;
      case 8:
            output_B(0x7F);
            break;
      case 9:
            output_B(0x3F);
            break;
      case a:
            output_B(0x5F);
            break;
      case b:
            output_B(0x73);
            break;
      case c:
            output_B(0x66);
            break;
      case d:
            output_B(0x79);
            break;
      case e:
            output_B(0x67);
            break;
      case f:
            output_B(0x47);
            break;
      case 99:
            output_B(0x80);
            break;
   }
}
