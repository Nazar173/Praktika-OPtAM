
//Napisat programy yaka rahye same menhe i bilhe slovo i vkazye kilkist bykv v slovi


Var
  s:string;
  max,min,i,k:integer;
begin
write('Введите строку: ');
readln(s);
s:=s+' ';
for i:=1 to length(s) do
  begin
  if s[i]=' ' then
     begin
     if k>max then max:=k;
     if (k<min) or (min=0) then min:=k;
     k:=-1;
     end;
  k:=k+1;
  end;
writeln('Самое короткое: ',min,'; самое длиное: ',max);
end.
