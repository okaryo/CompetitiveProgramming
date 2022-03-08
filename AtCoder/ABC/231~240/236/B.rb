N = gets.to_i
A = gets.split.map(&:to_i)
a = Array.new(N, 0)
A.each do |v|
  a[v-1] += 1
end
a.each_with_index do |v, i|
  if v == 3
    puts i+1
    exit 0
  end
end
