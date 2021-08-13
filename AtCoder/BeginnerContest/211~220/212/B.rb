x = gets.chomp
('0'..'9').each do |i|
  weak = x.chars.all? { |c| c == i }
  if weak
    puts('Weak')
    exit 0
  end
end
check = true
3.times do |i|
  if (x[i].to_i + 1) % 10 != x[i+1].to_i
    check = false
    break
  end
end
unless check
  puts('Strong')
else
  puts('Weak')
end
