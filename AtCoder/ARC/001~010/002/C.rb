n = gets.to_i
c = gets.chomp

a = %w[A B X Y]
b = []
a.each do |x|
  a.each do |y|
    b << x + y
  end
end

ans = n
b.each do |x|
  b.each do |y|
    i = 0
    cnt = 0
    while i < n - 1 do
      t = c[i, 2]
      if t == x || t == y
        cnt += 1
        i += 1
      end
      i += 1
    end

    ans = [ans, n - cnt].min
  end
end

puts ans
