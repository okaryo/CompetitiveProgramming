x = gets.to_i

if 400 <= x && x <= 599
  puts 8
elsif 600 <= x && x <= 799
  puts 7
elsif 800 <= x && x <= 999
  puts 6
elsif 1000 <= x && x <= 1199
  puts 5
elsif 1200 <= x && x <= 1399
  puts 4
elsif 1400 <= x && x <= 1599
  puts 3
elsif 1600 <= x && x <= 1799
  puts 2
elsif 1800 <= x && x <= 1999
  puts 1
end