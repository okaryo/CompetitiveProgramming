s = gets.chomp
n = s.size

if s == '{}'
  puts 'dict'
  exit
end

cnt = 0
n.times do |i|
  if s[i] == '{'
    cnt += 1
  elsif s[i] == '}'
    cnt -= 1
  elsif s[i] == ':' && cnt == 1
    puts 'dict'
    exit
  end
end

puts 'set'
