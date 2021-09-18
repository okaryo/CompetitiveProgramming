s1 = gets.chomp
s2 = gets.chomp
s3 = gets.chomp
t = gets.chomp
ans = ''
t.size.times do |i|
  if t[i] == '1'
    ans << s1
  elsif t[i] == '2'
    ans << s2
  else
    ans << s3
  end
end
puts ans
