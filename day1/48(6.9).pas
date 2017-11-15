uses crt;
var
   s:string;
   i:longint;
   lit:byte;
begin
   clrscr;
   readln(s);
   for i:=1 to length(s) do
      if s[i] in ['a'..'z','а'..'я','ё','A'..'Z','А'..'Я','Ё'] then
         inc(lit);
   writeln('Отношение букв к длине текста: ',lit/length(s)*100,'%');
end.