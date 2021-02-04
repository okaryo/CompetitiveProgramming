x = gets.chomp
l = x.length
i = 0
while i < l
  if x[i] == 'o' || x[i] == 'k' || x[i] == 'u'
    i += 1
  elsif (x[i] == 'c' && i + 1 != l && x[i + 1] == 'h')
    i += 2
  else
    puts 'NO'
    exit 0
  end
end
puts 'YES'
