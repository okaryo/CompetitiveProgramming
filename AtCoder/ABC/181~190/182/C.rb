n = gets.chomp
a = [0, 0, 0]
sum = 0
n.each_char do |c|
  a[c.to_i % 3] += 1
  sum += c.to_i
end
if sum % 3 == 0
  puts 0
elsif sum % 3 == 1
  if a[1] > 0
    if n.length == 1
      puts -1
    else
      puts 1
    end
  else
    if n.length == 2
      puts -1
    else
      puts 2
    end
  end
else
  if a[2] > 0
    if n.length == 1
      puts -1
    else
      puts 1
    end
  else
    if n.length == 2
      puts -1
    else
      puts 2
    end
  end
end
