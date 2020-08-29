n = gets.chomp
sum = 0
l = n.length
l.times do |i|
  sum += n[i].to_i
end

puts sum % 9 == 0 ? 'Yes' : 'No'
