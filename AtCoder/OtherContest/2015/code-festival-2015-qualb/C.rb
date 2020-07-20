n,m = gets.split.map(&:to_i)
a = gets.split.map(&:to_i).sort.reverse
b = gets.split.map(&:to_i).sort.reverse

if n < m
  puts 'NO'
  exit
end

m.times do |i|
  if b[i] > a[i]
    puts 'NO'
    exit
  end
end

puts 'YES'
