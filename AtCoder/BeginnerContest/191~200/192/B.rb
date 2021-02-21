s = gets.chomp
s.each_char.with_index do |c, i|
  next if i % 2 == 0 && c == c.downcase
  next if i % 2 == 1 && c == c.upcase
  puts 'No'
  exit 0
end
puts 'Yes'
