// �������� �������� ��� �������� ��������� ���� �� ������� ������


uses crt;
var
   s:string;
   i:longint;
   lit:byte;
begin
   clrscr;
   readln(s);
   for i:=1 to length(s) do
      if s[i] in ['a'..'z','�'..'�','�','A'..'Z','�'..'�','�'] then
         inc(lit);
   writeln('��������� ���� � ����� ������: ',lit/length(s)*100,'%');
end.