N = gets.to_i
C = N.times.map{gets.split.map(&:to_i)}
min_c1j = 10**9 + 10
min_c1j_index = nil
C[0].each_with_index do |c,i|
  if c < min_c1j
    min_c1j = c
    min_c1j_index = i
  end
end
N.times do |i|
  N.times do |j|
    next if j == min_c1j_index
    diff = C[0][j] - min_c1j
    if C[i][j] - diff != C[i][min_c1j_index]
      puts('No')
      exit 0
    end
  end
end
a = []
b = []
N.times do |i|
  b << C[0][i] - min_c1j
end
N.times do |i|
  a << C[i][0] - b[0]
end
puts('Yes')
puts(a.join(' '))
puts(b.join(' '))
