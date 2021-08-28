k = gets.to_i
a = Array.new(k+1, 0)
a[1] = 7%k
2.upto(k) { |i| a[i] = (a[i-1]*10 + 7) % k }
1.upto(k) do |i|
  if a[i] == 0
    puts i
    exit 0
  end
end
puts -1
