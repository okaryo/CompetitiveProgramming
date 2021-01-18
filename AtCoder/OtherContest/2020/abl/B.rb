a,b,c,d = gets.split.map(&:to_i)
if (c <= a && a <= d) || (a <= c && d <= b) || (c <= b && b <= d)
  puts 'Yes'
else
  puts 'No'
end
