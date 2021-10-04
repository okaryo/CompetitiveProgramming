N = gets.chomp
nums = N.split('').map(&:to_i).sort.reverse
a = ''
b = ''
nums.each do |i|
  if a.to_i <= b.to_i
    a += i.to_s
  else
    b += i.to_s
  end
end
puts(a.to_i * b.to_i)
