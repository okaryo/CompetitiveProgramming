S = gets.chomp
m = {}
S.chars.each do |c|
  m[c] ||= 0
  m[c] += 1
end
if m.size == 3
  puts 6
elsif m.size == 2
  puts 3
else
  puts 1
end
