n = gets.to_i
a = n.times.map{gets.to_i}

sum = a.last
now_v = a.last

(n-2).downto(0) do |i|
  if a[i] == a[i+1] - 1
    now_v = a[i]
  elsif a[i] >= a[i+1]
    sum += a[i]
    now_v = a[i]
  else
    puts -1
    exit
  end
end

unless now_v == 0
  puts -1
  exit
end

puts sum
