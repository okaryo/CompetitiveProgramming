H,W = gets.split.map(&:to_i)
A = H.times.map{gets.split.map(&:to_i)}
H.times do |i1|
  (i1+1).upto(H-1) do |i2|
    W.times do |j1|
      (j1+1).upto(W-1) do |j2|
        next if A[i1][j1] + A[i2][j2] <= A[i2][j1] + A[i1][j2]
        puts 'No'
        exit 0
      end
    end
  end
end
puts 'Yes'
