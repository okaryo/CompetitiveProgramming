n = gets.to_i
if 1 <= n && n <= 125
  puts(4)
elsif n <= 211
  puts(6)
else
  puts(8)
end
